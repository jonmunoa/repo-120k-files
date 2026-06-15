// fichero 2773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2773;

Registro2773 crear_registro2773(int id) {
    Registro2773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
