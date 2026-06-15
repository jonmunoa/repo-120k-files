// fichero 21817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21817;

Registro21817 crear_registro21817(int id) {
    Registro21817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
