// fichero 9121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9121;

Registro9121 crear_registro9121(int id) {
    Registro9121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
