// fichero 44741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44741;

Registro44741 crear_registro44741(int id) {
    Registro44741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
