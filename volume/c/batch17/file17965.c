// fichero 17965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17965;

Registro17965 crear_registro17965(int id) {
    Registro17965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
