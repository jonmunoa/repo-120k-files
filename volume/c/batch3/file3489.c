// fichero 3489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3489;

Registro3489 crear_registro3489(int id) {
    Registro3489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
