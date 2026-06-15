// fichero 44669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44669;

Registro44669 crear_registro44669(int id) {
    Registro44669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
