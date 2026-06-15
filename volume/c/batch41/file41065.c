// fichero 41065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41065;

Registro41065 crear_registro41065(int id) {
    Registro41065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
