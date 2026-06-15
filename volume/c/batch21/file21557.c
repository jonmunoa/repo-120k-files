// fichero 21557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21557;

Registro21557 crear_registro21557(int id) {
    Registro21557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
