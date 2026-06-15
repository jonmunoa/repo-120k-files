// fichero 41485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41485;

Registro41485 crear_registro41485(int id) {
    Registro41485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
