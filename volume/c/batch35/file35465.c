// fichero 35465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35465;

Registro35465 crear_registro35465(int id) {
    Registro35465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
