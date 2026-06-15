// fichero 9641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9641;

Registro9641 crear_registro9641(int id) {
    Registro9641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
