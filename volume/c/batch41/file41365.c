// fichero 41365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41365;

Registro41365 crear_registro41365(int id) {
    Registro41365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
