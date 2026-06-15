// fichero 44085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44085;

Registro44085 crear_registro44085(int id) {
    Registro44085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
