// fichero 28697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28697;

Registro28697 crear_registro28697(int id) {
    Registro28697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
