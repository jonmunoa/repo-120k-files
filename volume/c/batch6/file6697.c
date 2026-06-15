// fichero 6697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6697;

Registro6697 crear_registro6697(int id) {
    Registro6697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
