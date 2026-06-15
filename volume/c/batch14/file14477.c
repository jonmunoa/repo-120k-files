// fichero 14477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14477;

Registro14477 crear_registro14477(int id) {
    Registro14477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
