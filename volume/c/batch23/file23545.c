// fichero 23545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23545;

Registro23545 crear_registro23545(int id) {
    Registro23545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
