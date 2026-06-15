// fichero 41437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41437;

Registro41437 crear_registro41437(int id) {
    Registro41437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
