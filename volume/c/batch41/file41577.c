// fichero 41577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41577;

Registro41577 crear_registro41577(int id) {
    Registro41577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
