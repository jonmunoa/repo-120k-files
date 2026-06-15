// fichero 41237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41237;

Registro41237 crear_registro41237(int id) {
    Registro41237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
