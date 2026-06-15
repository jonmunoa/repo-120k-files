// fichero 25205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25205;

Registro25205 crear_registro25205(int id) {
    Registro25205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
