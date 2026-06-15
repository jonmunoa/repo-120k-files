// fichero 32777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32777;

Registro32777 crear_registro32777(int id) {
    Registro32777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
