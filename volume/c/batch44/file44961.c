// fichero 44961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44961;

Registro44961 crear_registro44961(int id) {
    Registro44961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
