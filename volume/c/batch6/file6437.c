// fichero 6437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6437;

Registro6437 crear_registro6437(int id) {
    Registro6437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
