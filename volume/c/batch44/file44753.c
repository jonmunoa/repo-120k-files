// fichero 44753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44753;

Registro44753 crear_registro44753(int id) {
    Registro44753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
