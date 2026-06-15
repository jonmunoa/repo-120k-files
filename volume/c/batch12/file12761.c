// fichero 12761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12761;

Registro12761 crear_registro12761(int id) {
    Registro12761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
