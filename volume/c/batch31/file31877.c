// fichero 31877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31877;

Registro31877 crear_registro31877(int id) {
    Registro31877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
