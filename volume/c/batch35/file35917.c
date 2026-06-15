// fichero 35917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35917;

Registro35917 crear_registro35917(int id) {
    Registro35917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
