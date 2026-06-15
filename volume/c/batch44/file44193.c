// fichero 44193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44193;

Registro44193 crear_registro44193(int id) {
    Registro44193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
