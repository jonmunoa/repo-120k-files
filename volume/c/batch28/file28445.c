// fichero 28445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28445;

Registro28445 crear_registro28445(int id) {
    Registro28445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
