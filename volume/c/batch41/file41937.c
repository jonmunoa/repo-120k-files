// fichero 41937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41937;

Registro41937 crear_registro41937(int id) {
    Registro41937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
