// fichero 35993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35993;

Registro35993 crear_registro35993(int id) {
    Registro35993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
