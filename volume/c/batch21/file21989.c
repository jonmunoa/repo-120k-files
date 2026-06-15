// fichero 21989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21989;

Registro21989 crear_registro21989(int id) {
    Registro21989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
