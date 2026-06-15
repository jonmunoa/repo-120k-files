// fichero 41121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41121;

Registro41121 crear_registro41121(int id) {
    Registro41121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
