// fichero 8233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8233;

Registro8233 crear_registro8233(int id) {
    Registro8233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
