// fichero 12449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12449;

Registro12449 crear_registro12449(int id) {
    Registro12449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
