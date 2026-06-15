// fichero 21553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21553;

Registro21553 crear_registro21553(int id) {
    Registro21553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
