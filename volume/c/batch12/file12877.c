// fichero 12877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12877;

Registro12877 crear_registro12877(int id) {
    Registro12877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
