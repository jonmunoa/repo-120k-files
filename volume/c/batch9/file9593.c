// fichero 9593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9593;

Registro9593 crear_registro9593(int id) {
    Registro9593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
