// fichero 19485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19485;

Registro19485 crear_registro19485(int id) {
    Registro19485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
