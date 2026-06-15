// fichero 47049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47049;

Registro47049 crear_registro47049(int id) {
    Registro47049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
