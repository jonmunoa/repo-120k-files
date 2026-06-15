// fichero 41961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41961;

Registro41961 crear_registro41961(int id) {
    Registro41961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
