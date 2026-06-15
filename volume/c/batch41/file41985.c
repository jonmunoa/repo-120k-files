// fichero 41985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41985;

Registro41985 crear_registro41985(int id) {
    Registro41985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
