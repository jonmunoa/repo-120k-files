// fichero 11133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11133;

Registro11133 crear_registro11133(int id) {
    Registro11133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
