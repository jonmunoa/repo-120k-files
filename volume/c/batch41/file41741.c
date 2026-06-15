// fichero 41741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41741;

Registro41741 crear_registro41741(int id) {
    Registro41741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
