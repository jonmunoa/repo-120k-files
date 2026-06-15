// fichero 41749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41749;

Registro41749 crear_registro41749(int id) {
    Registro41749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
