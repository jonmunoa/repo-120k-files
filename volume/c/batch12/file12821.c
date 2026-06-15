// fichero 12821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12821;

Registro12821 crear_registro12821(int id) {
    Registro12821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
