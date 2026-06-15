// fichero 8505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8505;

Registro8505 crear_registro8505(int id) {
    Registro8505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
