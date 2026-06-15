// fichero 41445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41445;

Registro41445 crear_registro41445(int id) {
    Registro41445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
