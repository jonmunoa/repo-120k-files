// fichero 41877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41877;

Registro41877 crear_registro41877(int id) {
    Registro41877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
