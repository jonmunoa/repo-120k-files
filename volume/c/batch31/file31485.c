// fichero 31485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31485;

Registro31485 crear_registro31485(int id) {
    Registro31485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
