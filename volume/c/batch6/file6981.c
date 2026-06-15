// fichero 6981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6981;

Registro6981 crear_registro6981(int id) {
    Registro6981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
