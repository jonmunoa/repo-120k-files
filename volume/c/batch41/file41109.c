// fichero 41109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41109;

Registro41109 crear_registro41109(int id) {
    Registro41109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
