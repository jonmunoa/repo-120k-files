// fichero 7741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7741;

Registro7741 crear_registro7741(int id) {
    Registro7741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
