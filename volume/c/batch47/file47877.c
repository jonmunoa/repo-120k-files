// fichero 47877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47877;

Registro47877 crear_registro47877(int id) {
    Registro47877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
