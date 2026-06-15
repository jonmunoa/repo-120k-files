// fichero 6161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6161;

Registro6161 crear_registro6161(int id) {
    Registro6161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
